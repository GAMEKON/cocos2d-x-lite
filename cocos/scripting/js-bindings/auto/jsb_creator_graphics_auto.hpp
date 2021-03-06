#pragma once
#include "base/ccConfig.h"

#include "cocos/scripting/js-bindings/jswrapper/SeApi.h"

extern se::Object* __jsb_creator_GraphicsNode_proto;
extern se::Class* __jsb_creator_GraphicsNode_class;

bool js_register_creator_GraphicsNode(se::Object* obj);
bool register_all_creator_graphics(se::Object* obj);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_quadraticCurveTo);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_moveTo);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_lineTo);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_stroke);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_arc);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_setLineJoin);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_close);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_ellipse);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_setLineWidth);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_fill);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_getStrokeColor);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_setLineCap);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_circle);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_roundRect);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_draw);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_bezierCurveTo);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_arcTo);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_fillRect);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_onDraw);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_setFillColor);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_getFillColor);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_beginPath);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_setDeviceRatio);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_rect);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_getMiterLimit);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_getLineJoin);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_getLineCap);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_setMiterLimit);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_clear);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_getDeviceRatio);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_getLineWidth);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_setStrokeColor);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_create);
SE_DECLARE_FUNC(js_creator_graphics_GraphicsNode_GraphicsNode);

