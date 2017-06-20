/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCreateNoteIntent : INIntent <INCreateNoteIntentExport>

@property (nonatomic, readonly, copy) INNoteContent *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) INSpeakableString *groupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_typedBackingStore;
- (id)content;
- (id)description;
- (id)domain;
- (id)groupName;
- (id)initWithTitle:(id)arg1 content:(id)arg2 groupName:(id)arg3;
- (id)parametersByName;
- (void)setContent:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)title;
- (id)verb;

@end