/* Test generation of macchw. on 440.  */
/* Origin: Joseph Myers <joseph@codesourcery.com> */
/* { dg-do compile } */
/* { dg-require-effective-target ilp32 } */
/* { dg-skip-if "do not override -mcpu" { powerpc*-*-* } { "-mcpu=*" } { "-mcpu=440" } } */
/* { dg-options "-O2 -mcpu=440" } */

/* { dg-final { scan-assembler "macchw\\. " } } */

int
f(int a, int b, int c)
{
  a += (short)b * (c >> 16);
  if (!a)
    return 10;
  return a;
}
