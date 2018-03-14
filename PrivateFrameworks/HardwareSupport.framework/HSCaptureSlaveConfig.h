/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
 */

@interface HSCaptureSlaveConfig : NSObject {
    bool  _frameSkippingEnabled;
    NSNumber * _slaveFramesPerMasterFrame;
    bool  _streamingOutputsEnabled;
}

@property (nonatomic) bool frameSkippingEnabled;
@property (nonatomic, retain) NSNumber *slaveFramesPerMasterFrame;
@property (nonatomic) bool streamingOutputsEnabled;

- (void).cxx_destruct;
- (bool)frameSkippingEnabled;
- (void)setFrameSkippingEnabled:(bool)arg1;
- (void)setSlaveFramesPerMasterFrame:(id)arg1;
- (void)setStreamingOutputsEnabled:(bool)arg1;
- (id)slaveFramesPerMasterFrame;
- (bool)streamingOutputsEnabled;

@end