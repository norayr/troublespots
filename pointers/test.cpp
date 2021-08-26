int *ptr = new int(10);
int *ptrDup = ptr;

delete ptr;

/*
 * But ptrDup still points to the memory location pointed by ptr which no longer exists. So, deferencing ptrDup results undefined behavior.
 * https://stackoverflow.com/questions/17202570/c-is-it-possible-to-determine-whether-a-pointer-points-to-a-valid-object
 *
 */
