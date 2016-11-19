// automatically generated by the FlatBuffers compiler, do not modify

namespace NullSpace.HapticFiles.Mixed
{

using System;
using FlatBuffers;

public struct ListOfHapticEffects : IFlatbufferObject
{
  private Table __p;
  public ByteBuffer ByteBuffer { get { return __p.bb; } }
  public static ListOfHapticEffects GetRootAsListOfHapticEffects(ByteBuffer _bb) { return GetRootAsListOfHapticEffects(_bb, new ListOfHapticEffects()); }
  public static ListOfHapticEffects GetRootAsListOfHapticEffects(ByteBuffer _bb, ListOfHapticEffects obj) { return (obj.__assign(_bb.GetInt(_bb.Position) + _bb.Position, _bb)); }
  public void __init(int _i, ByteBuffer _bb) { __p.bb_pos = _i; __p.bb = _bb; }
  public ListOfHapticEffects __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public NullSpace.HapticFiles.HapticEffect? Items(int j) { int o = __p.__offset(4); return o != 0 ? (NullSpace.HapticFiles.HapticEffect?)(new NullSpace.HapticFiles.HapticEffect()).__assign(__p.__indirect(__p.__vector(o) + j * 4), __p.bb) : null; }
  public int ItemsLength { get { int o = __p.__offset(4); return o != 0 ? __p.__vector_len(o) : 0; } }

  public static Offset<ListOfHapticEffects> CreateListOfHapticEffects(FlatBufferBuilder builder,
      VectorOffset itemsOffset = default(VectorOffset)) {
    builder.StartObject(1);
    ListOfHapticEffects.AddItems(builder, itemsOffset);
    return ListOfHapticEffects.EndListOfHapticEffects(builder);
  }

  public static void StartListOfHapticEffects(FlatBufferBuilder builder) { builder.StartObject(1); }
  public static void AddItems(FlatBufferBuilder builder, VectorOffset itemsOffset) { builder.AddOffset(0, itemsOffset.Value, 0); }
  public static VectorOffset CreateItemsVector(FlatBufferBuilder builder, Offset<NullSpace.HapticFiles.HapticEffect>[] data) { builder.StartVector(4, data.Length, 4); for (int i = data.Length - 1; i >= 0; i--) builder.AddOffset(data[i].Value); return builder.EndVector(); }
  public static void StartItemsVector(FlatBufferBuilder builder, int numElems) { builder.StartVector(4, numElems, 4); }
  public static Offset<ListOfHapticEffects> EndListOfHapticEffects(FlatBufferBuilder builder) {
    int o = builder.EndObject();
    return new Offset<ListOfHapticEffects>(o);
  }
};


}