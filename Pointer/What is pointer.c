// *p= value of address contained in p
// * -> indirection operator (pointer)
// &  -> address of ________

int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("\n %d = when entered a ",a);
    printf("\n %u = when entered &a ",&a);
    printf("\n %u = when entered &p ",&p);
    printf("\n %u = when entered p ",p);
    printf("\n %d = when entered *p ",*p);
    printf("\n %d = when entered *(&p) ",*(&p));
    printf("\n %d = when entered **(&p) ",**(&p));
    return 0;
}
