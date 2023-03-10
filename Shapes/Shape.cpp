#include "shape.h"
#include"../GUI/GUI.h"
#include"Graph.h"
#include"../controller.h"
#include"../operations/operation.h"

shape::shape(GfxInfo shapeGfxInfo)
{ 
	ShpGfxInfo = shapeGfxInfo;	//Default status is non-filled.
}
 
void shape::SetSelected(bool s)
{	ShpGfxInfo.isSelected = s; }


bool shape::IsSelected() const
{	return ShpGfxInfo.isSelected; }


void shape::ChngDrawClr(color Dclr)
{	ShpGfxInfo.DrawClr = Dclr; }

void shape::ChngFillClr(color Fclr)
{	
	ShpGfxInfo.isFilled = true;
	ShpGfxInfo.FillClr = Fclr; 
}
void shape::ChngDrawWidth(int Wnum)
{
	ShpGfxInfo.BorderWdth = Wnum;
}

