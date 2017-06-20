/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaControlsViewController : UIViewController <MPMediaControlsClientController> {
    UIVisualEffectView * _backgroundView;
    _UIAsyncInvocation * _cancelRequest;
    MPMediaControlsRemoteViewController * _remoteViewController;
}

@property (nonatomic, retain) UIVisualEffectView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPMediaControlsRemoteViewController *remoteViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_requestRemoteViewController;
- (id)backgroundView;
- (void)dealloc;
- (void)dismissFromTap:(id)arg1;
- (id)init;
- (id)remoteViewController;
- (void)setBackgroundView:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end