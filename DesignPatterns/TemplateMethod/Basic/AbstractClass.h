#pragma once
class AbstractClass
{
protected:
	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
	virtual void PrimitiveOperation3();
	void PrimitiveOperation4();

public:
	void TemplateMethod();
	virtual ~AbstractClass() = default;
};
