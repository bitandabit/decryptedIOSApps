//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCMagicEditHistoryData, UIImage;

@interface SCMagicEditData : NSObject
{
    UIImage *_editImage;
    SCMagicEditHistoryData *_patchData;
}

@property(retain, nonatomic) SCMagicEditHistoryData *patchData; // @synthesize patchData=_patchData;
@property(retain, nonatomic) UIImage *editImage; // @synthesize editImage=_editImage;
- (void).cxx_destruct;
- (id)init;

@end

