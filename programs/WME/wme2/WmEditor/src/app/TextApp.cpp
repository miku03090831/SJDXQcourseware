﻿/*
** Anxiu Li, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////

#include "precomp.h"

#include "TextApp.h"

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// TextApp

TextApp::TextApp()
{
}

TextApp::~TextApp() noexcept
{
}

//methods
bool TextApp::Init()
{
	m_textPart.attach_ReplaceCommand(get_ReplaceCommand());
	return true;
}

int TextApp::Run()
{
	m_textPart.Show();
	return Fl::run();
}

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
