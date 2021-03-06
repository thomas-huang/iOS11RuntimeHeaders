/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFFormattedTimeRemainingValue : NSObject <HFDynamicFormattingValue, HFSynchronizedTimerObserver, NAIdentifiable> {
    <HFStringGenerator> * _currentFormattedValue;
    NSDateComponentsFormatter * _formatter;
    NSMapTable * _observationBlocks;
    NSDate * _value;
}

@property (nonatomic, retain) <HFStringGenerator> *currentFormattedValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDateComponentsFormatter *formatter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *observationBlocks;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *value;

+ (id)defaultFormatter;
+ (id)na_identity;
+ (id)valueWithRemainingDuration:(double)arg1 relativeToDate:(id)arg2;

- (void).cxx_destruct;
- (id)_generateFormattedValue;
- (void)_stopTimer;
- (double)_timeRemaining;
- (void)_updateTimerState;
- (void)countdownTimerDidFire:(id)arg1;
- (id)currentFormattedValue;
- (id)formatter;
- (unsigned long long)hash;
- (id)initWithFireDate:(id)arg1;
- (id)initWithFireDate:(id)arg1 formatter:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)observationBlocks;
- (id)observeFormattedValueChangesWithBlock:(id /* block */)arg1;
- (void)setCurrentFormattedValue:(id)arg1;
- (id)value;

@end
