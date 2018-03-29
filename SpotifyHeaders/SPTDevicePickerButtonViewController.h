//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTGaiaDevicePickerButtonPresenter.h"

@class NSString, SPTGaiaDevicePickerButtonViewModel, SPTTheme, UIButton;

@interface SPTDevicePickerButtonViewController : UIViewController <SPTGaiaDevicePickerButtonPresenter>
{
    SPTGaiaDevicePickerButtonViewModel *_viewModel;
    UIButton *_devicePickerButton;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIButton *devicePickerButton; // @synthesize devicePickerButton=_devicePickerButton;
@property(retain, nonatomic) SPTGaiaDevicePickerButtonViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)showIconImage:(id)arg1;
- (void)devicePickerButtonPressed:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

