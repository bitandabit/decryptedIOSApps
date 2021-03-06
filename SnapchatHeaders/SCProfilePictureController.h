//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCProfilePictureDelegate-Protocol.h"

@class SCProfileImages;
@protocol SCProfilePictureContainerDelegate, SCProfilePictureControllerDelegate;

@interface SCProfilePictureController : NSObject <SCProfilePictureDelegate>
{
    id <SCProfilePictureControllerDelegate> _delegate;
    id <SCProfilePictureContainerDelegate> _profilePictureContainer;
    SCProfileImages *_profileImages;
}

@property(retain, nonatomic) SCProfileImages *profileImages; // @synthesize profileImages=_profileImages;
@property(nonatomic) __weak id <SCProfilePictureContainerDelegate> profilePictureContainer; // @synthesize profilePictureContainer=_profilePictureContainer;
@property(nonatomic) __weak id <SCProfilePictureControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawSnapcodeAndProfileImagesFromCacheInContext:(id)arg1 userSession:(id)arg2;
- (void)shareButtonPressedForUsername:(id)arg1;
- (id)initWithDelegate:(id)arg1 profilePictureContainer:(id)arg2 forProfileImages:(id)arg3;

@end

