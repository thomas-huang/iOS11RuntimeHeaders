/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoViewContentHelper : NSObject <PHLivePhotoViewDelegate> {
    ISWrappedAVAudioSession * __audioSession;
    PXUIAssetBadgeView * __badgeView;
    UIImageView * __crossfadeImageView;
    UIView * __highlightOverlayView;
    PXTitleSubtitleUILabel * __titleSubtitleLabel;
    PHAnimatedImage * _animatedImage;
    ISAnimatedImageView * _animatedImageView;
    bool  _animatingRoundedCorners;
    struct CGColor { } * _avalancheStackBackgroundColor;
    PUAvalancheStackView * _avalancheStackView;
    bool  _avoidsImageViewIfPossible;
    bool  _avoidsPhotoDecoration;
    UIColor * _backgroundColor;
    struct PXAssetBadgeInfo { 
        unsigned long long badges; 
        double duration; 
        long long count; 
    }  _badgeInfo;
    long long  _badgeStyle;
    PXCollectionTileLayoutTemplate * _collectionTileLayoutTemplate;
    double  _contentAlpha;
    UIView * _contentView;
    double  _cornerRadius;
    <PUPhotoViewContentHelperDelegate> * _delegate;
    struct { 
        bool respondsToLivePhotoWillBeginPlaybackWithStyle; 
    }  _delegateFlags;
    PXFeatureSpec * _featureSpec;
    long long  _fillMode;
    bool  _flattensBadgeView;
    bool  _hasPendingPlaybackRequest;
    bool  _hasTransform;
    bool  _highlighted;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _imageTransform;
    bool  _isTextBannerVisible;
    UIColor * _layerDefaultBackgroundColor;
    PHLivePhoto * _livePhoto;
    bool  _livePhotoHidden;
    PHLivePhotoView * _livePhotoView;
    bool  _loopingPlaybackAllowed;
    AVAsset * _loopingVideoAsset;
    ISWrappedAVPlayer * _loopingVideoPlayer;
    PXVideoPlayerView * _loopingVideoView;
    bool  _needsAvalancheStack;
    struct { 
        bool titleSubtitleUILabel; 
        bool loopingVideoView; 
        bool animatedImageView; 
    }  _needsUpdateFlags;
    UIColor * _overlayColor;
    long long  _pendingPlaybackRequestStyle;
    PUPhotoDecoration * _photoDecoration;
    PUBackgroundColorView * _photoDecorationBorderView;
    PUBackgroundColorView * _photoDecorationOverlayView;
    UIImage * _photoImage;
    UIImageView * _photoImageView;
    struct CGSize { 
        double width; 
        double height; 
    }  _photoSize;
    UIImage * _placeHolderImage;
    PXRoundedCornerOverlayView * _roundedCornerOverlayView;
    bool  _shouldPrepareForPlayback;
    bool  _showsLivePhoto;
    NSString * _subtitle;
    PUTextBannerView * _textBannerView;
    NSString * _title;
    NSString * _titleFontName;
    bool  _useOverlay;
}

@property (setter=_setAudioSession:, nonatomic, retain) ISWrappedAVAudioSession *_audioSession;
@property (setter=_setBadgeView:, nonatomic, retain) PXUIAssetBadgeView *_badgeView;
@property (nonatomic, retain) UIImageView *_crossfadeImageView;
@property (setter=_setHighlightOverlayView:, nonatomic, retain) UIView *_highlightOverlayView;
@property (setter=_setTitleSubtitleUILabel:, nonatomic, retain) PXTitleSubtitleUILabel *_titleSubtitleLabel;
@property (nonatomic, retain) PHAnimatedImage *animatedImage;
@property (getter=isAnimatingRoundedCorners, nonatomic) bool animatingRoundedCorners;
@property (nonatomic) struct CGColor { }*avalancheStackBackgroundColor;
@property (nonatomic, retain) PUAvalancheStackView *avalancheStackView;
@property (nonatomic) bool avoidsImageViewIfPossible;
@property (nonatomic) bool avoidsPhotoDecoration;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) UIView *badgeContainerView;
@property (nonatomic) struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; } badgeInfo;
@property (nonatomic) long long badgeStyle;
@property (nonatomic, retain) PXCollectionTileLayoutTemplate *collectionTileLayoutTemplate;
@property (nonatomic) double contentAlpha;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotoViewContentHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXFeatureSpec *featureSpec;
@property (nonatomic) long long fillMode;
@property (nonatomic) bool flattensBadgeView;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageContentFrame;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } imageTransform;
@property (nonatomic, retain) PHLivePhoto *livePhoto;
@property (getter=isLivePhotoHidden, nonatomic) bool livePhotoHidden;
@property (nonatomic, retain) PHLivePhotoView *livePhotoView;
@property (nonatomic) bool loopingPlaybackAllowed;
@property (nonatomic, copy) AVAsset *loopingVideoAsset;
@property (nonatomic) bool needsAvalancheStack;
@property (nonatomic, retain) UIColor *overlayColor;
@property (nonatomic, copy) PUPhotoDecoration *photoDecoration;
@property (nonatomic, retain) UIImage *photoImage;
@property (nonatomic, retain) UIImageView *photoImageView;
@property (nonatomic) struct CGSize { double x1; double x2; } photoSize;
@property (nonatomic, retain) UIImage *placeHolderImage;
@property (nonatomic, readonly) bool providesVisualFeedbackOnPress;
@property (nonatomic, retain) PXRoundedCornerOverlayView *roundedCornerOverlayView;
@property (nonatomic) bool shouldPrepareForPlayback;
@property (nonatomic) bool showsLivePhoto;
@property (nonatomic, retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PUTextBannerView *textBannerView;
@property (getter=isTextBannerVisible, nonatomic) bool textBannerVisible;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *titleFontName;
@property (nonatomic) bool useOverlay;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageContentFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 fillMode:(long long)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 fillMode:(long long)arg3;

- (void).cxx_destruct;
- (void)_addAvalancheStackViewIfNecessary;
- (id)_audioSession;
- (id)_badgeView;
- (id)_crossfadeImageView;
- (id)_highlightOverlayView;
- (void)_invalidateAnimatedImageView;
- (void)_invalidateBadgeView;
- (void)_invalidateLoopingVideoView;
- (void)_invalidateTitleSubtitleUILabel;
- (bool)_needsUpdate;
- (void)_removeAvalancheStackViewIfNecessary;
- (void)_removePhotoImageViewIfNecessary;
- (void)_setAudioSession:(id)arg1;
- (void)_setBadgeView:(id)arg1;
- (void)_setHighlightOverlayView:(id)arg1;
- (void)_setTitleSubtitleUILabel:(id)arg1;
- (void)_startPlaybackWhenLivePhotoAvailableWithStyle:(long long)arg1;
- (id)_titleSubtitleLabel;
- (void)_updateAnimatedImageViewIfNeeded;
- (void)_updateBadgeView;
- (void)_updateContentViewClipsToBounds;
- (void)_updateHighlight;
- (void)_updateIfNeeded;
- (void)_updateImageView;
- (void)_updateLayerCornerRadius;
- (void)_updateLivePhotoView;
- (void)_updateLivePhotoViewPreparing;
- (void)_updateLivePhotoViewVisibility;
- (void)_updateLoopingVideoViewIfNeeded;
- (void)_updatePhotoDecoration;
- (void)_updateRoundedCornersOverlayView;
- (void)_updateSubviewOrdering;
- (void)_updateTextBannerView;
- (void)_updateTitleSubtitleUILabelIfNeeded;
- (void)animateCrossfadeToImage:(id)arg1;
- (id)animatedImage;
- (struct CGColor { }*)avalancheStackBackgroundColor;
- (id)avalancheStackView;
- (bool)avoidsImageViewIfPossible;
- (bool)avoidsPhotoDecoration;
- (id)backgroundColor;
- (id)badgeContainerView;
- (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })badgeInfo;
- (long long)badgeStyle;
- (id)collectionTileLayoutTemplate;
- (double)contentAlpha;
- (id)contentView;
- (struct CGSize { double x1; double x2; })contentViewSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)cornerRadius;
- (id)delegate;
- (id)featureSpec;
- (long long)fillMode;
- (bool)flattensBadgeView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageContentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageContentFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })imageTransform;
- (id)init;
- (id)initWithContentView:(id)arg1;
- (bool)isAnimatingRoundedCorners;
- (bool)isHighlighted;
- (bool)isLivePhotoHidden;
- (bool)isTextBannerVisible;
- (void)layoutSubviewsOfContentView;
- (id)livePhoto;
- (id)livePhotoView;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (bool)loopingPlaybackAllowed;
- (id)loopingVideoAsset;
- (bool)needsAvalancheStack;
- (id)overlayColor;
- (id)photoDecoration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })photoDecorationBorderViewFrameForImageContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)photoImage;
- (id)photoImageView;
- (struct CGSize { double x1; double x2; })photoSize;
- (id)placeHolderImage;
- (bool)providesVisualFeedbackOnPress;
- (id)roundedCornerOverlayView;
- (void)setAnimatedImage:(id)arg1;
- (void)setAnimatingRoundedCorners:(bool)arg1;
- (void)setAvalancheStackBackgroundColor:(struct CGColor { }*)arg1;
- (void)setAvalancheStackView:(id)arg1;
- (void)setAvoidsImageViewIfPossible:(bool)arg1;
- (void)setAvoidsPhotoDecoration:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })arg1;
- (void)setBadgeStyle:(long long)arg1;
- (void)setCollectionTileLayoutTemplate:(id)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCornerRadius:(double)arg1 useOverlay:(bool)arg2 overlayColor:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setFeatureSpec:(id)arg1;
- (void)setFillMode:(long long)arg1;
- (void)setFlattensBadgeView:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setLivePhoto:(id)arg1;
- (void)setLivePhotoHidden:(bool)arg1;
- (void)setLivePhotoView:(id)arg1;
- (void)setLoopingPlaybackAllowed:(bool)arg1;
- (void)setLoopingVideoAsset:(id)arg1;
- (void)setNeedsAvalancheStack:(bool)arg1;
- (void)setOverlayColor:(id)arg1;
- (void)setPhotoDecoration:(id)arg1;
- (void)setPhotoImage:(id)arg1;
- (void)setPhotoImageView:(id)arg1;
- (void)setPhotoSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlaceHolderImage:(id)arg1;
- (void)setRoundedCornerOverlayView:(id)arg1;
- (void)setShouldPrepareForPlayback:(bool)arg1;
- (void)setShowsLivePhoto:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTextBannerVisible:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleFontName:(id)arg1;
- (void)setUseOverlay:(bool)arg1;
- (void)set_crossfadeImageView:(id)arg1;
- (bool)shouldPrepareForPlayback;
- (bool)showsLivePhoto;
- (void)startPlaybackWithStyle:(long long)arg1;
- (void)stopPlayback;
- (id)subtitle;
- (id)textBannerView;
- (id)title;
- (id)titleFontName;
- (void)updatePhotoImageWithoutReconfiguring:(id)arg1;
- (bool)useOverlay;

@end