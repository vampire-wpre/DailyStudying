#include<stdio.h>
//int main() 
//{
//    int a[3][3] = { {1, 2}, {3, 4}, {5, 6} }, i, j, s = 0;
//    for (i = 1; i < 3; i++)
//        for (j = 0; j <= i; j++) s += a[i][j];
//    printf("%d\n", s++);
//}
//A
//int* p; scanf("%d", &p);
//B
//int* p; scanf("%d", &p);
//C
//int k, * p = &k; scanf("%d", &p);
//D
//int k, * p; *p = &k; scanf("%d", &p);
//ABD选项中p没有赋初始值，是野指针





const char* a[] = { "BEIJING", "SHENZHEN", "SHANGHAI", "GUANGZHOU" };
const char** pa[] = { a + 3, a + 2, a + 1, a };
const char*** ppa = pa;
int main()
{
    printf("%s, ", **++ppa);
    printf("%s, ", *-- * ++ppa + 3);
    printf("%s, ", *ppa[-2] + 3);
    printf("%s", ppa[-1][-1] + 1);
}
/*
  对于指针ppa
        指针类型：char ***
        指针指向：pa[0]
        指针指向类型：char **
  //指针的指向决定其偏移起始位置，指针指向的类型决定其每次移动偏移量大小
*/
//printf("%s, ", **++ppa);
/*
    运算符优先级：++ 与 * 运算符同优先级，结合性都是自右向左
    ++ppa
        ppa自增，指向改变，向后移动一位,偏移量为char **,指向pa[1]
    *++ppa
        取出内容,pa[1],pa[1]又指向a[2]
    **++ppa
        取出内容,a[2],a[2]又指向字符串"SHANGHAI",printf输出 SHANGHAI
*/
//printf("%s, ", *-- * ++ppa + 3);
/*
    运算符优先级：++/-- 优先级大于 + ,且 + 的结合性是从左往右
    ++ppa
        上一次操作已改变ppa的指向为pa[1],再次移动，指向pa[2]
    *++ppa
        取出内容,pa[2],pa[2]又指向a[1]
    --*++ppa
        //此时，【*++ppa】是一个char **指针，指向a[1],
//则其偏移的起始位置为a[1],偏移量为char *
        --使其自减，指针向前移动，从a[1]向前移动一个char*的大小，指向a[0]
    *--*++ppa
        取出内容，a[0]，a[0]又指向字符串"BEIJING"
    *--*++ppa+3
        //此时【*--*++ppa】是一个char *指针，指向一个字符串，则其偏移的起始位置
//为字符串的首字符，偏移量为char
        +3使指针向后移动3次，每次移动一个char，移动完成后指向字符'J' ,printf
输出，从字符'J'的位置往后输出打印到STDOUT,输出 JING
*/
//printf("%s, ", *ppa[-2] + 3);
/*
    []作用符：【例子】
    int arr[]{ 0,1,2,3 };
    int *p=arr;
    ++p;
    cout << p[1] << " " << *(p + 1) << endl;
    cout << p[-1] << " " << *(p - 1) << endl;
    //p[1]等价于*(p + 1)   p[-1]等价于*(p - 1)
    ppa[-2]
        等价于*(ppa-2)
            ppa-2
                //经过前两次操作，ppa指向pa[2],移动后指向pa[0],【但ppa
//本身的指向并没有改变，还是指向pa[2]】
            *(ppa-2)
                取出内容，pa[0],pa[0]又指向a[3]
    *ppa[-2]
        取出内容，a[3]，a[3]又指向字符串"GUANGZHOU"
    *ppa[-2]+3
        +3使指针移动到字符'N',printf输出 NGZHOU
*/
//printf("%s", ppa[-1][-1] + 1);
/*
    //类似与ppa[-2]等价于*(ppa-2),ppa[-1][-1]等价于*(*(ppa-1)-1)
    ppa[-1]
        等价于*(ppa-1)
            //经过前三步操作，ppa指向pa[2]，移动后，指向pa[1],
//取出内容pa[1],pa[1]又指向a[2]
    ppa[-1][-1]
        等价于*(*(ppa-1)-1)
            *(ppa-1)-1
                将上一步操作中的*(ppa-1)看做一个整体，是一个char **指针，
指向类型为char * 的a[2]
                则指针 *(ppa-1) 偏移的起始位置为a[2]，向前移动一次，
偏移量为char *,移动后指向a[1]
            *(*(ppa-1)-1)
                取出内容，a[1]，a[1]又指向字符串"SHENZHEN"
    ppa[-1][-1]+1
        +1指针其移动到字符'H',printf输出 HENZHEN
*/