#include<stdio.h>
int nelements,WEIGHT;
void knapSack(int,int,int[],int[]);
int main() {
 	//total items
 	printf("\nEnter the number of items :");
 		scanf("%d",&nelements);
 	printf("\nEnter the maximum capacity of sack : ");
 		scanf("%d",&WEIGHT); //capacity of knapsack
 	int profitarr[nelements],weightarr[nelements];
 	printf("\nEnter the (weight,profit) of items : ");
 	for(int i=1;i<=nelements;i++)
		scanf("%d%d",&weightarr[i],&profitarr[i]);
 	knapSack(WEIGHT,nelements,profitarr,weightarr);
 	return 0;
}
void knapSack(int WEIGHT, int nelements, int profitarr[], int weightarr[]) {
	//value table having nelements+1 rows and WEIGHT+1 columns
	 int knapsackarr[nelements+1][WEIGHT+1];
	 //fill the row i=0 with value 0
	 for(int i = 0; i <= WEIGHT; i++) {
	 knapsackarr[0][i] = 0;
	 }
	 //fille the column WEIGHT=0 with value 0
	 for(int i = 0; i <= nelements; i++) {
	 knapsackarr[i][0] = 0;
	 }
	 //fill the value table
	 for(int i = 1; i <= nelements; i++) {
	 	for(int j = 1; j <= WEIGHT; j++) {
	 		if(weightarr[i] <= j) {
	 			if(knapsackarr[i-1][j]<(profitarr[i] + knapsackarr[i-1][j - weightarr[i]])){
	 				knapsackarr[i][j] = profitarr[i] + knapsackarr[i-1][j - weightarr[i]];
	 			}
	 			else
	 			{
	 				knapsackarr[i][j] =knapsackarr[i-1][j];
	 			}
	 		} 
	 		else {
	 			knapsackarr[i][j] = knapsackarr[i-1][j];
	 		}
	 	}
	 }
	 printf("\n-------DP Tabulation matrix------\n");
	 for(int i=0;i<=nelements;i++)
	 {
	 for(int j=0;j<=WEIGHT;j++)
	 {
	 printf("%d\t",knapsackarr[i][j]);
	 }
	 printf("\n");
	 }
	 printf("\nFinding items :\n");
	 int i=nelements,k=WEIGHT;
	 while(i>0 && k>0){
	 if(knapsackarr[i][k]!=knapsackarr[i-1][k])
	 {
	 //mark the ith item as in the knapsack
	 printf("\n%d item got selected.\n",i);
	 i=i-1;
	 k=k-weightarr[i];
	 }
	 else
	 i=i-1;//// Assume the ith item is not in the knapsack
	 }
 }