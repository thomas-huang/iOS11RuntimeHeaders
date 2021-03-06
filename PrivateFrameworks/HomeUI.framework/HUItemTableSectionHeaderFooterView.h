/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUItemTableSectionHeaderFooterView : UITableViewHeaderFooterView <UITextViewDelegate> {
    NSArray * _constraints;
    <HFStringGenerator> * _message;
    UITextView * _messageTextView;
    <HUTextInteractionHandling> * _textInteractionHandler;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) <HFStringGenerator> *message;
@property (nonatomic, retain) UITextView *messageTextView;
@property (readonly) Class superclass;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) <HUTextInteractionHandling> *textInteractionHandler;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textViewEdgeInsets;
@property (nonatomic) unsigned long long type;

+ (id)defaultAttributesForType:(unsigned long long)arg1;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_updateDefaultValuesForType;
- (id)constraints;
- (id)detailTextLabel;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)message;
- (id)messageTextView;
- (void)prepareForReuse;
- (void)setConstraints:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageTextView:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextInteractionHandler:(id)arg1;
- (void)setTextViewEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setType:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)textAlignment;
- (id)textColor;
- (id)textInteractionHandler;
- (id)textLabel;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textViewEdgeInsets;
- (unsigned long long)type;

@end
