// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
 KPaint Document Library
// // This file is released under the terms of the MIT license.
 Read LICENSE.txt for more information.
 ifndef DOC_LAYER_LIST_H_INCLUDED
 define DOC_LAYER_LIST_H_INCLUDED
 pragma once
 include <vector>
namespace doc {
class Layer;
typedef std::vector<Layer*> LayerList;
typedef int layer_t;
layer_t find_layer_index(const LayerList& layers, const Layer* layer);
bool are_layers_adjacent(const LayerList& layers);
} // namespace doc
// endif // DOC_LAYER_LIST_H_INCLUDED
