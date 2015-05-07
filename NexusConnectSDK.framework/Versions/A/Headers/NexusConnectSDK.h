//
//  NexusConnectHandler.h
//  NexusConnect-EPSDK
//
//  Created by Gurpreet Singh on 1/12/15.
//  Copyright (c) 2015 support. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/*
 
Register this protocol to get the callback for SDK initilization errors

 */
@protocol NexusSDKDelegate <NSObject>

-(void)didReceiveSDKInitilizationErrorForReason:(NSString *)error;

@end

@interface NexusConnectSDK : NSObject
{
	
}

/*
 
delegate object for SDK

 */
@property(nonatomic,weak)id<NexusSDKDelegate> sdkDelegate;

/*
 
 call this method to create instance of NexusConnectSDK

 */
+ (id)sharedInstance;

/*
 
 call to method to initilize SDK by passing the authentication token. 
 This token can be obtained from "Admin" tab from Nexus Server
 In essence, this method will be called from didFinishLaunchingWithOptions method in your AppDelegate.m
 
*/
-(void)initializeNexusConnectSDKWithAuthToken:(NSString*)token;

/*
 
 Call this method to display SDK user interface.
 Pass the viewController on which you want to display the SDK

*/
-(void)getSupportWithViewController:(UIViewController *)viewController;


/*

 Stop the SDK

*/
-(void)stopSDK;


@end





