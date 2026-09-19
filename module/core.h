module core {
  export class complex {
    <rt> slf._real;
    <it> slf._imag;
    lazy clz clz.nrm = [0, 0];
    lazy signal __cnstrc__(slf) {
      slf._real = <rt>.nrm;
      slf._imag = <it>.nrm;
      return statu;
    }
    lazy signal __dstrc__(slf) {
      return statu;
    }
    lazy signal __set__(slf, struct[<> _real_, <> _imag_] val) {
      slf._real = cast <rt> _real_;
      slf._imag = cast <it> _imag_;
      return statu;
    }
    lazy clz __get__(slf) {
      return [_real, _imag];
    }
    lazy clz __plus__(slf, )
  }
}
