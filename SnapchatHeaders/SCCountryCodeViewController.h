//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCRegisterCountryPickerViewDelegate-Protocol.h"

@class NSDictionary, NSString, SCRegisterCountryPickerView;
@protocol SCCountryCodeViewControllerDelegate;

@interface SCCountryCodeViewController : UIViewController <SCRegisterCountryPickerViewDelegate>
{
    SCRegisterCountryPickerView *_countryPickerView;
    NSString *_countryCode;
    NSDictionary *_context;
    id <SCCountryCodeViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_pageNameForPageView;
- (void)leftCountryPickerButtonPressedWithCountryCode:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithDelegate:(id)arg1 context:(id)arg2;

@end
