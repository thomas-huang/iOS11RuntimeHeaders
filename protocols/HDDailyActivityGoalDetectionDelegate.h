/* Generated by RuntimeBrowser.
 */

@protocol HDDailyActivityGoalDetectionDelegate <NSObject>

@required

- (void)runDailyGoalCompletionDetectionForGoalType:(void *)arg1 cacheIndex:(void *)arg2 previousValue:(void *)arg3 currentValue:(void *)arg4 goalValue:(void *)arg5 shouldAlert:(void *)arg6 goalMetHandler:(void *)arg7 completion:(void *)arg8; // needs 8 arg types, found 20: unsigned long long, long long, double, double, double, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, double, double, void*, id /* block */, void*, void, id /* block */, bool, bool, void*

@optional

- (void)concludeRunWithSuccess:(bool)arg1 cacheIndex:(long long)arg2;

@end
