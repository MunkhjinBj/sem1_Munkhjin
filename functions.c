#include "myinclude.h"

void read(int A[], int n)
{
        int i;
        for (i = 0; i < n; i++)
                scanf("%d", &A[i]);
}

void print(int A[], int n)
{
        int i;
        for (i = 0; i < n; i++)
                printf("%d ", A[i]);
        printf("\n");
}

int max(int A[], int n)
{
        m = A[0];
        for(int i = 1; i < n; i++){
                if(A[i] > m){
                        m = A[i];
                }
        }
        return m;
}

int min(int A[], int n)
{
        mini = A[0];
        for(int i = 1;i < n; i++){
                if(A[i] < m){
                        m = A[i];
                }
        }
        return mini;
}

void copy(int A[], int n, int B[])
{
        for(int i = 0; i < n; i++) 
                B[i] = A[i];     
}

int find(int A[], int n, int x)
{
        for(int i = 0; i < n; i++)
                if( x == A[i])
                        return i;
                else
                        return -1;
}

int make_set(int A[], int n, int B[])
{
        int m = 0;

	for(int i = 0; i < n; i++){
		int k = 0;
		for(int j = 0; j < m; j++){
			if(A[i] == B[j]){
				k = 1;
				break;
			}
		}
		if(!k){
			B[m] = A[i];
			m++; 
		}
	}
	return m;

}

int union_set(int A[], int n, int B[], int m)
{
         for(int i = 0; i < m; i++){
		int d = 0;
       		for(int j = 0; j < n; j++){
       			if(B[i] == A[j]){
       				d = 1;
       				break;
				   }
			   }
			if(!d){
				A[n] = B[i];
				n++;
			}
	   }     
	   return n;    
}

int intersection_set(int A[], int n, int B[], int m, int C[])
{
        for(int i = 0; i < n; i++){
		
	for(int j = 0; j < m; j++){
		if(A[i] == B[j]){
			int d = 0;
			for(int k = 0; k < c; k++){
				if(A[i] == C[k]){
					d = 1;
					break;
				}
			}
			if(!d){
				C[c] = A[i];
				c++;
			}
			break;
		}
	}
	}
	return c;
}

