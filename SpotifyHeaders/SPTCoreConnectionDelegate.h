//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTCoreConnectionDelegate : NSObject
{
    weak_ptr_bef3906d _connection;
}

@property(nonatomic) weak_ptr_bef3906d connection; // @synthesize connection=_connection;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)initWithAppleConnection:(const weak_ptr_bef3906d *)arg1;

@end

