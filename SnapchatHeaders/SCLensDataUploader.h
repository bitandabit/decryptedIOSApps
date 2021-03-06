//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCSessionRequestManager;
@protocol SCPerforming;

@interface SCLensDataUploader : NSObject
{
    SCSessionRequestManager *_requestManager;
    id <SCPerforming> _performer;
}

@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(retain, nonatomic) SCSessionRequestManager *requestManager; // @synthesize requestManager=_requestManager;
- (void).cxx_destruct;
- (void)uploadUserGeneratedAssetWithId:(id)arg1 encryptionKey:(id)arg2 encryptionIv:(id)arg3 fromPath:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithRequestManager:(id)arg1 peformer:(id)arg2;

@end

