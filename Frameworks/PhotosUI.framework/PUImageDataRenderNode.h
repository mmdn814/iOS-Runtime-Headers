/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImageDataRenderNode : PXRunNode <PUImageDataRenderNode> {
    struct CGSize { 
        float width; 
        float height; 
    }  _baseImageSize;
    NSData * _imageData;
    <PUImageInfoNode> * _imageDataNode;
    float  _jpegCompression;
    PLPhotoEditModel * _photoEditModel;
    struct CGSize { 
        float width; 
        float height; 
    }  _renderedImageSize;
}

@property (nonatomic, readonly) struct CGSize { float x1; float x2; } baseImageSize;
@property (getter=isCanceled, readonly) BOOL canceled;
@property (getter=isComplete, readonly) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXRunNodeDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) <PUImageInfoNode> *imageDataNode;
@property (nonatomic, readonly) float jpegCompression;
@property (nonatomic, readonly, copy) PLPhotoEditModel *photoEditModel;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } renderedImageSize;
@property (getter=isRunning, readonly) BOOL running;
@property (readonly) unsigned int state;
@property (readonly) Class superclass;
@property (getter=isWaiting, readonly) BOOL waiting;

- (void).cxx_destruct;
- (void)_handleRenderCompletedWithJpegData:(id)arg1 editedSize:(struct CGSize { float x1; float x2; })arg2;
- (id)_initializeImageWithError:(id*)arg1;
- (BOOL)_isInputValid;
- (struct CGSize { float x1; float x2; })baseImageSize;
- (id)imageData;
- (id)imageDataNode;
- (id)initWithImageInfoNode:(id)arg1 photoEditModel:(id)arg2 jpegCompression:(float)arg3;
- (float)jpegCompression;
- (id)photoEditModel;
- (struct CGSize { float x1; float x2; })renderedImageSize;
- (void)run;

@end
