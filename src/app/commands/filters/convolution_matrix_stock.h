// KPaint
// Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
// the End-User License Agreement for KPaint.

Copyright (C) 2024-2025 KiriX Company
// // This program is distributed under the terms of
 the End-User License Agreement for KPaint.



 ifndef APP_COMMANDS_FILTERS_CONVOLUTION_MATRIX_STOCK_H_INCLUDED
 define APP_COMMANDS_FILTERS_CONVOLUTION_MATRIX_STOCK_H_INCLUDED
 pragma once
 include <memory>
 include <vector>
namespace filters {
class ConvolutionMatrix;
}
namespace app {
using namespace filters;
 A container of all convolution matrices in the convmatr.def file.
class ConvolutionMatrixStock {
public:
  typedef std::vector<std::shared_ptr<ConvolutionMatrix>>::iterator iterator;
  typedef std::vector<std::shared_ptr<ConvolutionMatrix>>::const_iterator const_iterator;
  ConvolutionMatrixStock();
  virtual ~ConvolutionMatrixStock();
  iterator begin() { return m_matrices.begin(); }
  iterator end() { return m_matrices.end(); }
  const_iterator begin() const { return m_matrices.begin(); }
  const_iterator end() const { return m_matrices.end(); }
  std::shared_ptr<ConvolutionMatrix> getByName(const char* name);
  void reloadStock();
  void cleanStock();

private:
  std::vector<std::shared_ptr<ConvolutionMatrix>> m_matrices;
};
} // namespace app
 endif
