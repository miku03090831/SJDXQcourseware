﻿/*
** Xin YUAN, 2019, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////
#ifndef __TEXT_MODEL_H__
#define __TEXT_MODEL_H__
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// TextModel

class TextModel : public PropertyTrigger
{
public:
	TextModel();
	TextModel(const TextModel&) = delete;
	TextModel& operator=(const TextModel&) = delete;
	~TextModel() noexcept;

//properties
	RefPtr<Fl_Text_Buffer> get_TextBuf() noexcept;

//methods
	bool Load(const std::string& str);
	bool Save(const std::string& str);

private:
	Fl_Text_Buffer  m_textBuffer;
};

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////
