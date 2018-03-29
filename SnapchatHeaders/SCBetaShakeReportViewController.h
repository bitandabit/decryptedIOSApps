//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseShakeReportViewController.h"

#import "SCHeaderDelegate-Protocol.h"
#import "SCShakeProjectViewDelegate-Protocol.h"
#import "SCShakeSubmitDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, UIScrollView;

@interface SCBetaShakeReportViewController : SCBaseShakeReportViewController <SCHeaderDelegate, SCShakeProjectViewDelegate, SCShakeSubmitDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    NSString *_projectName;
    UIScrollView *_scrollView;
    _Bool _doesAttachImage;
    long long _mode;
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)removeObservers;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)addObservers;
- (void)drawOnAttachmentViewControllerDidDeleteImage:(id)arg1 index:(long long)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)submitClicked:(_Bool)arg1;
- (void)addAttachmentSingleTap;
- (void)projectSelected:(id)arg1;
- (void)tapToSelectTapped;
- (void)rightButtonPressed;
- (void)_hideKeyboard;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateSubmitButton;
- (void)setupProjectView:(id)arg1;
- (void)setupAttachmentEditLabel;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
