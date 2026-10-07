#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ko-KR");
	
	FILE* rfp = fopen(argv[1], "r");
	FILE* wfp = fopen(argv[2], "w");
	
	if (argc != 3)
	{
		printf("Usage : %s [target kc file path] [output c++ file path]", argv[0]);
		
		return 1;
	}
	
	if (!rfp || !wfp)
	{
		printf("Failed to target / output file open!");
		
		return 1;
	}
	
	int lineNumber;
	char buffer[512];
	char editContent[512];
	
	for (lineNumber = 1; !feof(rfp); lineNumber++)
	{
		memset(editContent, 0, sizeof(editContent));
		memset(editContent, 0, sizeof(editContent));
		fgets(buffer, 512, rfp);
		
		char* word = strtok(buffer, " ");
		
		while (word)
		{
			// 전처리기 변환 
			if (strcmp(word, "전처리기") == 0)
			{
				word = strtok(NULL, " ");
				
				if (strcmp(word, "포함") == 0)
				{
					word = strtok(NULL, " ");
					
					strcat(editContent, "#include ");
				}
			}
			
			// 문자열 변환 
			if (strcmp(word, "문자열") == 0)
			{
				word = strtok(NULL, " ");
				
				strcat(editContent, "\"");
				
				while (word)
				{
					if (strcmp(word, "문자열") == 0)
					{
						editContent[strlen(editContent) - 1] = '\"';
						editContent[strlen(editContent)] = ' ';
						
						break;
					}
					
					strcat(editContent, word);
					strcat(editContent, " ");
					
					word = strtok(NULL, " ");
				}
				
				word = strtok(NULL, " ");
			}
			
			if (word)
			{
				strcat(editContent, word);
				strcat(editContent, " ");
			}
			else
			{
				strcat(editContent, "\n");
			}
			
			word = strtok(NULL, " ");
		}
		
		printf("%d %s", lineNumber, editContent);
		fputs(editContent, wfp);
	}
	
	fclose(rfp);
	fclose(wfp);
	
	return 0;
}
