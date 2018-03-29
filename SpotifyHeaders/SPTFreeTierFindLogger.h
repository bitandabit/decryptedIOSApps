//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTViewLogger;

@interface SPTFreeTierFindLogger : NSObject
{
    id <SPTLogCenterProtocol> _logCenter;
    SPTViewLogger *_viewLogger;
}

@property(retain, nonatomic) SPTViewLogger *viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logViewDidLoadWithPageIdentifier:(id)arg1;
- (void)logViewLoadingStartedWithPageIdentifier:(id)arg1;
- (void)logDidTapCancelButton;
- (void)logDidTapSearchButton;
- (id)initWithLogCenter:(id)arg1 viewURI:(id)arg2;

@end
