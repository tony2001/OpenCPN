//////////////////////////////////////////////////////////////////////////////
// Name:        SVGTextPathElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_TEXT_PATH_ELEMENT_H
#define WX_SVG_TEXT_PATH_ELEMENT_H

#include "SVGTextContentElement.h"
#include "SVGURIReference.h"
#include "SVGAnimatedLength.h"
#include "SVGAnimatedEnumeration.h"
#include "SVGSVGElement.h"
#include "String_wxsvg.h"
#include "Element.h"
#include "SVGAnimatedType.h"


enum wxTEXTPATH_METHODTYPE
{
  wxTEXTPATH_METHODTYPE_UNKNOWN = 0,
  wxTEXTPATH_METHODTYPE_ALIGN = 1,
  wxTEXTPATH_METHODTYPE_STRETCH = 2
};


enum wxTEXTPATH_SPACINGTYPE
{
  wxTEXTPATH_SPACINGTYPE_UNKNOWN = 0,
  wxTEXTPATH_SPACINGTYPE_AUTO = 1,
  wxTEXTPATH_SPACINGTYPE_EXACT = 2
};

class wxSVGTextPathElement:
  public wxSVGTextContentElement,
  public wxSVGURIReference
{
  protected:
    wxSVGAnimatedLength m_startOffset;
    wxSVGAnimatedEnumeration m_method;
    wxSVGAnimatedEnumeration m_spacing;

  public:
    inline const wxSVGAnimatedLength& GetStartOffset() const { WX_SVG_ANIM_LENGTH_CALC_WIDTH(m_startOffset, GetViewportElement()); return m_startOffset; }
    inline void SetStartOffset(const wxSVGAnimatedLength& n) { m_startOffset = n; }
    inline void SetStartOffset(const wxSVGLength& n) { m_startOffset.SetBaseVal(n); }

    inline const wxSVGAnimatedEnumeration& GetMethod() const { return m_method; }
    inline void SetMethod(const wxSVGAnimatedEnumeration& n) { m_method = n; }
    inline void SetMethod(unsigned char n) { m_method.SetBaseVal(n); }

    inline const wxSVGAnimatedEnumeration& GetSpacing() const { return m_spacing; }
    inline void SetSpacing(const wxSVGAnimatedEnumeration& n) { m_spacing = n; }
    inline void SetSpacing(unsigned char n) { m_spacing.SetBaseVal(n); }

  public:
    wxSVGTextPathElement(wxString tagName = wxT("textPath")):
      wxSVGTextContentElement(tagName) {}
    virtual ~wxSVGTextPathElement() {}
    wxSvgXmlNode* CloneNode(bool deep = true) { return new wxSVGTextPathElement(*this); }
    bool HasAttribute(const wxString& name) const;
    wxString GetAttribute(const wxString& name) const;
    bool SetAttribute(const wxString& name, const wxString& value);
    wxSvgXmlAttrHash GetAttributes() const;
    bool SetAnimatedValue(const wxString& name, const wxSVGAnimatedType& value);
    virtual wxSVGDTD GetDtd() const { return wxSVG_TEXTPATH_ELEMENT; }
};

#endif // WX_SVG_TEXT_PATH_ELEMENT_H