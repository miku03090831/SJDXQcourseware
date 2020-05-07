﻿/*
** XIN YUAN, 2020, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////

#include "precomp.h"

#include "ReplacePart.h"

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// ReplacePart

ReplacePart::ReplacePart() : m_dlgReplace(300, 105, "Replace")
{
}

ReplacePart::~ReplacePart() noexcept
{
}

void ReplacePart::Show()
{
	m_dlgReplace.show();
}

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
