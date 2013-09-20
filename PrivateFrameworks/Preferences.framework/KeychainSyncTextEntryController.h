/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, PSSpecifier, PSTableCell, UIView<UIKeyInput>;

@interface KeychainSyncTextEntryController : PSKeychainSyncViewController <KeychainSyncPasscodeFieldDelegate> {
    BOOL _hidesNextButton;
    BOOL _secureTextEntry;
    PSTableCell *_textEntryCell;
    PSSpecifier *_textEntrySpecifier;
    int _textEntryType;
    UIView<UIKeyInput> *_textEntryView;
    NSString *_textValue;
}

@property BOOL hidesNextButton;
@property BOOL secureTextEntry;
@property int textEntryType;
@property(retain) NSString * textValue;

- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)didFinishEnteringText:(id)arg1;
- (id)getTextValueForSpecifier:(id)arg1;
- (BOOL)hidesNextButton;
- (id)init;
- (void)loadView;
- (void)nextPressed;
- (unsigned int)numberOfPasscodeFields;
- (void)passcodeField:(id)arg1 didUpdateEnteredPasscode:(id)arg2;
- (id)placeholderText;
- (BOOL)secureTextEntry;
- (void)setHidesNextButton:(BOOL)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setTextEntryText:(id)arg1;
- (void)setTextEntryType:(int)arg1;
- (void)setTextValue:(id)arg1 forSpecifier:(id)arg2;
- (void)setTextValue:(id)arg1;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)textEntryCell;
- (Class)textEntryCellClass;
- (id)textEntrySpecifier;
- (id)textEntryText;
- (int)textEntryType;
- (id)textEntryView;
- (void)textEntryViewDidChange:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (id)textValue;
- (void)updateNextButton;
- (void)viewWillAppear:(BOOL)arg1;

@end