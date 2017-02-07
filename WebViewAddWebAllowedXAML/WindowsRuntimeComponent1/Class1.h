#pragma once

namespace WindowsRuntimeComponent1
{
	[Windows::Foundation::Metadata::AllowForWebAttribute]
    public ref class Class1 sealed
    {
    public:
        Class1();
		int getNum();

	private:
		int num;
    };
}
