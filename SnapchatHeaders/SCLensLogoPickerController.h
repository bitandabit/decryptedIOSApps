//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, SCGrowingButton, UIImagePickerController, UIView;
@protocol SCLensLogoPickerControllerDelegate;

@interface SCLensLogoPickerController : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    UIView *_parentView;
    NSMutableArray *_imageViews;
    UIImagePickerController *_imagePickerController;
    SCGrowingButton *_infoButton;
    SCGrowingButton *_pickerButton;
    SCGrowingButton *_trashButton;
    _Bool _trashGrown;
    id <SCLensLogoPickerControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCLensLogoPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)restoreStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveState:(id)arg1;
- (id)imageViewForImage:(id)arg1;
- (void)pinch:(id)arg1;
- (void)pan:(id)arg1;
- (void)presentImagePicker;
- (void)showInfo;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (_Bool)pointInsidePicker:(struct CGPoint)arg1;
- (void)hideAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1;
- (id)trashButton;
- (id)pickerButton;
- (id)infoButton;
- (id)initWithParentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
