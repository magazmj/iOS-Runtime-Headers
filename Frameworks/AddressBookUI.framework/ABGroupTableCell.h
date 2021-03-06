/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABGroupWrapper, ABStyleProvider;

@interface ABGroupTableCell : UITableViewCell <ABGroupWrapperDelegate> {
    ABGroupWrapper *_groupWrapper;
    ABStyleProvider *_styleProvider;
}

@property(retain) ABGroupWrapper * groupWrapper;
@property(retain) ABStyleProvider * styleProvider;

- (void)dealloc;
- (void)groupWrapper:(id)arg1 didBecomeSelected:(BOOL)arg2;
- (id)groupWrapper;
- (void)setGroupWrapper:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)tintColorDidChange;
- (void)updateFromGroupWrapper;

@end
