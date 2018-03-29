//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TCV3Session : NSObject
{
    struct Handle<std::__1::shared_ptr<talkcorev3::Session>, std::__1::shared_ptr<talkcorev3::Session>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dispose;
- (void)refreshParticipants;
- (id)getLocalState;
- (id)getState;
- (id)getMetricsMetadataContainer;
- (id)getCallingManager;
- (void)processTypingActivity:(long long)arg1;
- (void)background;
- (void)deactivate;
- (void)activate;
- (void)setDelegate:(id)arg1;
- (id)initWithCpp:(const shared_ptr_785f52f1 *)arg1;

@end

