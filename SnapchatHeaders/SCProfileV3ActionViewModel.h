//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface SCProfileV3ActionViewModel : NSObject
{
    _Bool _toggledStatus;
    NSString *_text;
    UIImage *_image;
    UIImage *_selectedImage;
    CDUnknownBlockType _tapBlock;
}

@property(readonly, nonatomic) _Bool toggledStatus; // @synthesize toggledStatus=_toggledStatus;
@property(readonly, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(readonly, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithText:(id)arg1 image:(id)arg2 toggledStatus:(_Bool)arg3 tapBlock:(CDUnknownBlockType)arg4;
- (id)initWithText:(id)arg1 image:(id)arg2 selectedImage:(id)arg3 tapBlock:(CDUnknownBlockType)arg4;

@end

