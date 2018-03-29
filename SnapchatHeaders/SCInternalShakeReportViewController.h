//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseShakeReportViewController.h"

#import "SCHeaderDelegate-Protocol.h"
#import "SCShakeProjectViewDelegate-Protocol.h"
#import "SCShakeScreenRecordingMenuWindowDelegate-Protocol.h"
#import "SCShakeScreenshotMenuWindowDelegate-Protocol.h"
#import "SCShakeSubmitDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, SCShakeScreenRecordingMenuWindow, SCShakeScreenshotMenuWindow, UILabel, UIScrollView;

@interface SCInternalShakeReportViewController : SCBaseShakeReportViewController <SCHeaderDelegate, SCShakeProjectViewDelegate, SCShakeSubmitDelegate, SCShakeScreenshotMenuWindowDelegate, SCShakeScreenRecordingMenuWindowDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    UIScrollView *_scrollView;
    UILabel *_emailSwitcherLabel;
    NSString *_videoFilePath;
    _Bool isEmail;
    _Bool _doesAttachLogs;
    NSMutableArray *_attachmentThumbnailsFromUser;
    NSMutableArray *_attachmentVideosFromUser;
    SCShakeScreenshotMenuWindow *_screenshotMenuWindow;
    SCShakeScreenRecordingMenuWindow *_screenRecordingMenuWindow;
    NSString *_projectName;
    NSString *_jiraMetaInfo;
}

@property(copy, nonatomic) NSString *jiraMetaInfo; // @synthesize jiraMetaInfo=_jiraMetaInfo;
@property(copy, nonatomic) NSString *projectName; // @synthesize projectName=_projectName;
- (void).cxx_destruct;
- (void)removeObservers;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)addObservers;
- (void)attachmentDidSingleTap:(long long)arg1 attachmentView:(id)arg2 type:(unsigned long long)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)screenRecordingMenuWindowDidCancelCapture:(id)arg1;
- (void)screenRecordingMenuWindow:(id)arg1 didFinishRecordingVideoAtPath:(id)arg2 thumbnailImage:(id)arg3;
- (void)screenshotMenuWindow:(id)arg1 didCapture:(id)arg2;
- (void)screenshotMenuWindowDidCancelCapture:(id)arg1;
- (void)addAttachmentSingleTap;
- (void)submitClicked:(_Bool)arg1;
- (void)toggledNonExclusiveOption;
- (void)subProjectSelected:(id)arg1;
- (void)projectSelected:(id)arg1;
- (void)subProjectTapToSelectTapped;
- (void)tapToSelectTapped;
- (void)emailTextChange:(id)arg1;
- (void)rightButtonPressed;
- (id)_getExtraAttachmentVideos;
- (id)_getExtraAttachmentImages;
- (void)_previewAudioVisualAttachmentWithURL:(id)arg1;
- (_Bool)_canBeSentToEmail:(id)arg1;
- (void)_switchEmailOrProject:(id)arg1;
- (void)_hideKeyboard;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateSubmitButton;
- (void)setupProjectView:(id)arg1;
- (void)setupEmailSwitcherView:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

