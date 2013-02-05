/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPMediaItem, IUVideoTitleViewPlayButton, MPDownloadProgressIndicator;

@interface IUVideoTitleView : UIView {
    SEL _action;
    float _downloadProgress;
    MPDownloadProgressIndicator *_downloadProgressIndicator;
    BOOL _downloadable;
    BOOL _downloading;
    MPMediaItem *_mediaItem;
    IUVideoTitleViewPlayButton *_playButton;
    id _target;
}

@property BOOL canCancelDownload;
@property float downloadProgress;
@property(getter=isDownloadable) BOOL downloadable;
@property(getter=isDownloading) BOOL downloading;
@property(retain) MPMediaItem * mediaItem;
@property(getter=isPlayButtonEnabled) BOOL playButtonEnabled;

- (void)_cancelAction:(id)arg1;
- (id)_copyrightFormattedString;
- (void)_playMovie:(id)arg1;
- (void)_updatePlayButtonImages;
- (BOOL)canCancelDownload;
- (void)dealloc;
- (float)downloadProgress;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDownloadable;
- (BOOL)isDownloading;
- (BOOL)isPlayButtonEnabled;
- (void)layoutSubviews;
- (id)mediaItem;
- (void)setCanCancelDownload:(BOOL)arg1;
- (void)setDownloadProgress:(float)arg1;
- (void)setDownloadable:(BOOL)arg1;
- (void)setDownloading:(BOOL)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setPlayButtonEnabled:(BOOL)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end