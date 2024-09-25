#include <stdio.h>//Array移除元素的双指针法
int removeelement(int num[],int size,int val){
    int j=0;//第一个指针J 用来储存不是val的元素
    for(int i=0;i<size;i++){//第二个指针I 用来遍历
        if(num[i]!=val){//如果i不是指定的元素
            num[j]=num[i];//就用num[i]替换num[j]这样的话就实现了把要保留的元素留在数组的最前端
            j++;
        }
    }
    return j;//返回的J就是要保留的元素数量
} 

int main(){
    int num[7]={1,2,2,3,0,4,2};
    int size=sizeof(num)/sizeof(num[0]);
    int val=2;
    int length=removeelement(num,size,val);//length用来调用之前的函数的结果实际上就是J
    printf("The new array length is %d\n",length);//所以新的array的长度就是筛选过后的J
    printf("The modified array is :");
    for(int i=0;i<length;i++){//由于length是筛选过后的所以<length就可以只打印筛选过后的元素
        printf("%d ",num[i]);
    }
    return 0;
}