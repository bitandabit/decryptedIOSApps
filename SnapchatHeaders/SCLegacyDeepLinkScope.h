//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol SCDeepLinkUserActionDelegate;

@interface SCLegacyDeepLinkScope : NSObject
{
    id <SCDeepLinkUserActionDelegate> _userActionDelegate;
}

+ (id)scopeWithUserActionDelegate:(id)arg1;
@property(readonly, nonatomic) __weak id <SCDeepLinkUserActionDelegate> userActionDelegate; // @synthesize userActionDelegate=_userActionDelegate;
- (void).cxx_destruct;
- (id)initWithUserActionDelegate:(id)arg1;

@end

