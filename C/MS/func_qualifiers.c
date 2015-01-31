void __stdcall foo(void);
void _cdecl bar(void);
void __fastcall baz(void);
void __thiscall that(void);

void (__stdcall* ptr0)(void);
void (_cdecl* ptr1)(void);
void (__fastcall* ptr2)(void);
void (__thiscall* ptr3)(void);

int main(void)
{
	return 0;
}
