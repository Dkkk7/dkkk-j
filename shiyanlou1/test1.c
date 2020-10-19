int g(int x)
{
    return x + 20;
}

int f(int x)
{
    return g(x);
}

int main(void)
{
    return f(93) + 11;
}