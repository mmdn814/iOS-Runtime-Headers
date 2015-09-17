/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNNameStringTokenizer : NSObject {
    NSObject<OS_dispatch_queue> *_syncQueue;
    struct __CFStringTokenizer { } *_tokenizer;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, readonly) struct __CFStringTokenizer { }*tokenizer;

+ (void)setInferredNameOrder:(int*)arg1 toTokenizerNameOrder:(int)arg2;
+ (id)tokenizeNameString:(id)arg1;
+ (id)tokenizeNameString:(id)arg1 usingLocale:(id)arg2 inferredNameOrder:(int*)arg3;

- (void)dealloc;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)syncQueue;
- (id)tokenizeNameString:(id)arg1 inferredNameOrder:(int*)arg2;
- (struct __CFStringTokenizer { }*)tokenizer;

@end