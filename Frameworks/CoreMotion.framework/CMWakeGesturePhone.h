/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMWakeGesturePhone : CMWakeGestureManager {
    unsigned int  backlightService;
    long long  fCurrentState;
    bool  fEnableAudioAlert;
    bool  fEnableLatencyAlert;
    unsigned int  fIoNotification;
    struct IONotificationPort { } * fIoNotifyPort;
    bool  fIsRunningInPrimaryProcess;
    double  fLastDisplayOnTime;
    double  fLastNotificationTime;
    int  fLatencyAlertThreshold;
    int  fLockScreenToken;
    int  fMeasureLatencyState;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fPowerStateDispatcher;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
    NSString * fProcessName;
    int  fScreenDimmingNotificationToken;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fWakeDispatcher;
    struct unique_ptr<CMWakeGestureVisitor, std::__1::default_delete<CMWakeGestureVisitor> > { 
        struct __compressed_pair<CMWakeGestureVisitor *, std::__1::default_delete<CMWakeGestureVisitor> > { 
            struct CMWakeGestureVisitor {} *__first_; 
        } __ptr_; 
    }  fWakeGestureVisitor;
    double  fWakePacketTimestamp;
    bool  gestureUpdatesStarted;
}

+ (bool)hasSlowBootArgs;
+ (bool)isWakeGestureAvailable;
+ (id)stringForGestureState:(long long)arg1;
+ (id)stringForMode:(unsigned char)arg1;
+ (id)stringForNotification:(unsigned char)arg1;
+ (id)stringForStartPose:(unsigned char)arg1;
+ (id)stringForViewPose:(unsigned char)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)invokeDelegateWithState:(long long)arg1;
- (void)loadPreferences;
- (void)logWakeLatency;
- (void)onBacklightServiceUpdated:(unsigned int)arg1;
- (void)onNotificationControl:(id)arg1;
- (void)onPowerStateUpdated:(const struct Sample { unsigned int x1; }*)arg1;
- (void)onWakeUpdated:(const struct Sample { double x1; struct CLGestureReport {} *x2; }*)arg1;
- (void)playAlert;
- (void)reenableDetectedStateRecognition;
- (bool)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2;
- (void)startWakeGestureUpdates;
- (void)stopWakeGestureUpdates;
- (void)writeAggdScalarForKey:(id)arg1 withValue:(id)arg2;

@end
