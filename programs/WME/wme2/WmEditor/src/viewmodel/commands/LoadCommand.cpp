﻿/*
** Xin YUAN, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////

#include "precomp.h"

#include "../../model/TextModel.h"
#include "../TextViewModel.h"

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// TextViewModel

std::function<bool(const std::string&)> TextViewModel::get_LoadCommand()
{
	return [this](const std::string& strFile)->bool
			{
				return this->m_refModel->Load(strFile);
			};
}

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
