/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTArgumentPlaceholderNode : TSTExpressionNode {
    NSString * mDetokenizedText;
    short  mMode;
}

@property (nonatomic) short mode;

+ (id)argumentSpecForFunctionIndex:(int)arg1 argumentIndex:(int)arg2;

- (id)argumentName;
- (id)bakedValue;
- (void)buildASTNodeArray:(/* Warning: unhandled struct encoding: '{TSCEASTNodeArray=*II@}' */ struct TSCEASTNodeArray { char *x1; unsigned int x2; unsigned int x3; id x4; }*)arg1 hostCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 symbolTable:(struct TSCESymbolTable { id x1; struct unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct __hash_table<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, std::__1::__unordered_map_hasher<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringHash, true>, std::__1::__unordered_map_equal<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringEqual, true>, std::__1::allocator<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; }*)arg3;
- (id)copyIntoContext:(id)arg1 bakeModes:(BOOL)arg2 children:(id)arg3;
- (void)dealloc;
- (id)detokenizedText;
- (id)exportString;
- (id)formulaPlainText;
- (BOOL)hasMenu;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initFromArchive:(const struct ArgumentPlaceholderNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ExpressionNodeArchive {} *x5; unsigned int x6; unsigned int x7; unsigned int x8; }*)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 argumentSpec:(id)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (id)initWithContext:(id)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (BOOL)isEqualToExpressionNode:(id)arg1;
- (short)mode;
- (id)modeNames;
- (void)p_invalidate;
- (struct TSTCSENodeData { unsigned int x1; unsigned int x2; })recordHashesForSubexpressions:(id)arg1;
- (void)saveToArchive:(struct ArgumentPlaceholderNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ExpressionNodeArchive {} *x5; unsigned int x6; unsigned int x7; unsigned int x8; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setArgumentSpec:(id)arg1;
- (void)setMode:(short)arg1;
- (id)string;
- (int)tokenType;

@end
