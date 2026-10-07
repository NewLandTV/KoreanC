//#define _CRT_SECURE_NO_WARNINGS
//#include "한글"
//
//정수 진입점 께서 괄호여닫고
//중괄호열고
//	문자 ㄹ 대괄호열고 백 더하기 일 대괄호닫고 쌍반점 이고
//	서식입력 괄호열고 "%s" 와 ㄹ 괄호닫고 쌍반점 하고
//	반복 괄호열고 정수 ㅣ 는 영 부터 ㅣ 보다큰 십 까지 ㅣ 는 ㅣ 더하기 하나 하고 괄호닫고
//	중괄호열고
//		서식출력 괄호열고 "%c" 와 ㄹ 대괄호열고 영 대괄호닫고 괄호닫고 쌍반점 하며
//	중괄호닫고
//	결국 반환 하다 영 을 쌍반점
//중괄호닫기

// 기본 한글 문법 관련
#include <stdio.h>

// 표준 입출력
#define 서식입력 scanf
#define 서식출력 printf

// 접속어
#define 하지만
#define 또한
#define 그러므로
#define 따라서
#define 그럼에도
#define 결국
#define 한편

// 조사
#define 을
#define 를
#define 께서
#define 에서
#define 에

// 문구
#define 하고
#define 하며
#define 하면
#define 이고
#define 하므로
#define 하다
#define 이며
#define 이면
#define 이므로
#define 이다

// 구문과 키워드
#define 반복 for
#define 반환 return

// 연산자
#define 더하기 +
#define 보다큰 <
#define 보다작은 >
#define 보다크거나같음 <=
#define 보다작거나같음 >=
#define 대입 =
#define 은 =
#define 는 =
#define 증감 ++
#define 감소 --
#define 플러스 +
#define 마이너스 -
#define 양수 +
#define 음수 -

// 반복문 관련
#define 부터 ;
#define 까지 ;

#define 쌍반점 ;
#define 과 ,
#define 와 ,
#define 점 .

// 괄호 종류
#define 괄호열기 (
#define 괄호열고 (
#define 괄호닫기 )
#define 괄호닫고 )
#define 괄호열고닫기 ()
#define 괄호여닫기 ()
#define 괄호여닫고 ()
#define 중괄호열기 {
#define 중괄호열고 {
#define 중괄호닫기 }
#define 중괄호닫고 }
#define 중괄호열고닫기 {}
#define 중괄호여닫기 {}
#define 중괄호여닫고 {}
#define 대괄호열기 [
#define 대괄호열고 [
#define 대괄호닫기 ]
#define 대괄호닫고 ]
#define 대괄호열고닫기 []
#define 대괄호여닫기 []
#define 대괄호여닫고 []

// 메인 함수
#define 진입점 main

// 숫자
#define 영 0
#define 공 0
#define 일 1
#define 하나 1
#define 십 10
#define 백 100

// 자료형
typedef void 빈;
typedef int 정수;
typedef char 문자;

정수 진입점 께서 괄호여닫고
중괄호열고
	문자 ㄹ 대괄호열고 백 더하기 일 대괄호닫고 쌍반점 이고
	서식입력 괄호열고 "%s" 와 ㄹ 괄호닫고 쌍반점 하고
	반복 괄호열고 정수 ㅣ 는 영 부터 ㅣ 보다큰 십 까지 ㅣ 는 ㅣ 더하기 하나 하고 괄호닫고
	중괄호열고
		서식출력 괄호열고 "%c" 와 ㄹ 대괄호열고 영 대괄호닫고 괄호닫고 쌍반점 하며
	중괄호닫고
	결국 반환 하다 영 을 쌍반점
중괄호닫기