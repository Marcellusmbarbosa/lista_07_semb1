void swap(int *i, int *j) {
int *tmp;
*tmp = *i;
*i = *j;
*j = *tmp;
}

//corrigido

void swap(int *i, int *j) {
    int tmp;
    tmp = *i;
    *i = *j;
    *j = tmp;
}
